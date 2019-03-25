import java.util.*;

class Edge {
	int toEdge;
	int price;
	Edge(int toEdge, int price) {
		this.toEdge = toEdge;
		this.price = price;
	}
}

class Matrix {
	List<Edge> edges;
	Matrix() {
		edges = new ArrayList<>();
	}
}

public class Main {
	private static Scanner scanner = new Scanner(System.in);
	public static void main(String[] args) {
		int n = scanner.nextInt();
		int m = scanner.nextInt();
		int toVertex;
		int fromVertex;
		int price;
		Matrix[] matrix = new Matrix[n + 1];
		for (int i = 0; i <= n; i++) {
			matrix[i] = new Matrix();
		}
		for (int i = 0; i < m; i++) {
			fromVertex = scanner.nextInt();
			toVertex = scanner.nextInt();
			price = scanner.nextInt();
			matrix[fromVertex].edges.add(new Edge(toVertex, price));
			matrix[toVertex].edges.add(new Edge(fromVertex, price));
		}
		PriorityQueue<Edge> priorityQueue = new PriorityQueue<>((Edge left, Edge right) -> {
			return left.price - right.price;
		});
		Set<Integer> vertexSet = new HashSet<>();
		vertexSet.add(1);
		priorityQueue.addAll(matrix[1].edges);
		int result = 0;

		while(vertexSet.size() != n) {
			Edge edge = priorityQueue.remove();
			price = edge.price;
			toVertex = edge.toEdge;
			if (vertexSet.contains(toVertex)) {
				continue;
			}
			result += price;
			priorityQueue.addAll(matrix[toVertex].edges);
			vertexSet.add(toVertex);
		}
		System.out.println(result);
	}
}
