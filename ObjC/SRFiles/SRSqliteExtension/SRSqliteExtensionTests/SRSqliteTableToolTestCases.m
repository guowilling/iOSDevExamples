//
//  SRSqliteTableToolTestCase.m
//  SRSqliteExtension
//
//  Created by 郭伟林 on 2017/6/23.
//  Copyright © 2017年 SR. All rights reserved.
//

#import <XCTest/XCTest.h>
#import "SRSqliteTableTool.h"
#import "Student.h"

@interface SRSqliteTableToolTestCases : XCTestCase

@end

@implementation SRSqliteTableToolTestCases

- (void)setUp {
    [super setUp];
    // Put setup code here. This method is called before the invocation of each test method in the class.
}

- (void)tearDown {
    // Put teardown code here. This method is called after the invocation of each test method in the class.
    [super tearDown];
}

- (void)testExample {
    // This is an example of a functional test case.
    // Use XCTAssert and related functions to verify your tests produce the correct results.
}

- (void)testTableSortedColumnNames {
    
    NSArray *names = [SRSqliteTableTool sortedTableFieldsName:[Student class] uid:nil];
    NSLog(@"%@", names);
}

- (void)testPerformanceExample {
    // This is an example of a performance test case.
    [self measureBlock:^{
        // Put the code you want to measure the time of here.
    }];
}

@end
