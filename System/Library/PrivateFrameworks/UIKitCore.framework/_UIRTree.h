/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:05 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableIndexSet, NSIndexSet;

@interface _UIRTree : NSObject {

	shared_ptr<_UIRTreeContainerNode>* _root;
	NSRange _allIndexesRange;
	NSMutableIndexSet* _allIndexes;

}

@property (nonatomic,readonly) CGRect boundingFrame; 
@property (nonatomic,readonly) NSIndexSet * allIndexes; 
-(id)description;
-(id)init;
-(CGRect)boundingFrame;
-(void)enumerateFramesWithBlock:(/*^block*/id)arg1 ;
-(id)visualDescription;
-(id)indexesForFramesIntersectingFrame:(CGRect)arg1 ;
-(void)insertFrame:(CGRect)arg1 forIndex:(long long)arg2 ;
-(NSIndexSet *)allIndexes;
-(CGRect)_frameForIndex:(long long)arg1 ;
@end

