//
//  Document.h
//  RaiseMan
//
//  Created by Can on 1/13/15.
//  Copyright (c) 2015 Can. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface Document : NSDocument {
    NSMutableArray *_employees;
}

- (void)setEmployees:(NSMutableArray *)a;

@end

