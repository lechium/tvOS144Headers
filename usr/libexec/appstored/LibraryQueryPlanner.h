//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSPredicateVisitor-Protocol.h"

@class LibraryExpressionClassifier, NSMutableArray;

@interface LibraryQueryPlanner : NSObject <NSPredicateVisitor>
{
    LibraryExpressionClassifier *_classifier;	// 8 = 0x8
    NSMutableArray *_stack;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010020673c
- (void)visitPredicateOperator:(id)arg1;	// IMP=0x0000000100206738
- (void)visitPredicateExpression:(id)arg1;	// IMP=0x0000000100206734
- (void)visitPredicate:(id)arg1;	// IMP=0x0000000100206044
- (id)executeQueryWithPredicate:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100205ea0
- (id)initWithClassifier:(id)arg1;	// IMP=0x0000000100205e28

@end

