/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:06 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSOrderedSet;

@interface WFContentCoercionNode : NSObject {

	id _itemOrItemClass;
	WFContentCoercionNode* _parent;

}

@property (nonatomic,readonly) id itemOrItemClass;                              //@synthesize itemOrItemClass=_itemOrItemClass - In the implementation block
@property (nonatomic,readonly) WFContentCoercionNode * parent;                  //@synthesize parent=_parent - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * itemOrItemClassPath; 
@property (nonatomic,readonly) NSOrderedSet * coercionPath; 
+(id)coercionNodeWithItem:(id)arg1 parent:(id)arg2 ;
+(id)coercionNodeWithItemClass:(Class)arg1 parent:(id)arg2 ;
+(id)coercionNodeWithItemOrItemClass:(id)arg1 parent:(id)arg2 ;
-(id)description;
-(WFContentCoercionNode *)parent;
-(id)initWithItemOrItemClass:(id)arg1 parent:(id)arg2 ;
-(id)successorsWithOptions:(id)arg1 ;
-(id)successorsWithOptions:(id)arg1 goalType:(id)arg2 ;
-(NSOrderedSet *)itemOrItemClassPath;
-(NSOrderedSet *)coercionPath;
-(void)runCoercionWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)continueCoercionUsingPathEnumerator:(id)arg1 contentItems:(id)arg2 options:(id)arg3 error:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)runCoercionSynchronouslyWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)continueCoercionUsingPathEnumerator:(id)arg1 contentItems:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)itemOrItemClass;
@end

