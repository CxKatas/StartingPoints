import org.junit.Before;
import org.junit.Test;

/****************************************************************************
// Copyright (c) 2018, Construx Software, Inc., All Rights Reserved.
//
// This code is the exclusive property of Construx Software, Inc. It may ONLY 
// be used by learners during Construx's workshops or by individuals who are 
// being coached by Construx on a project.
//
// This code may NOT be copied or used for any other purpose without the prior
// written consent of Construx Software, Inc.
// ***************************************************************************/

/**
 * @author melvinperez
 *
 */
public class WorldTest {
	private World world;

	// Any live cell with fewer than two live neighbors dies, as if caused by
	// under-population.

	// Any live cell with more than three live neighbors dies, as if by
	// overcrowding.

	// Any live cell with two or three live neighbors lives on to the next
	// generation.

	// Any dead cell with exactly three live neighbors becomes a live cell.

	@Test
	public void weCanSeeTheWorld() throws Exception {
		System.out.println(world.dashboard());
	}

	@Before
	public void glider() {
		world = new World(6, 8);
		///// 1 2 3 4 5 6 7 8
		// 1 |.|.|.|.|.|.|.|.|
		// 2 |.|.|.|*|.|.|.|.|
		// 3 |.|.|.|.|*|.|.|.|
		// 4 |.|.|*|*|*|.|.|.|
		// 5 |.|.|.|.|.|.|.|.|
		// 6 |.|.|.|.|.|.|.|.|
		world.setLiveCellAt(2, 4);
		world.setLiveCellAt(3, 5);
		world.setLiveCellAt(4, 3);
		world.setLiveCellAt(4, 4);
		world.setLiveCellAt(4, 5);
	}
}
