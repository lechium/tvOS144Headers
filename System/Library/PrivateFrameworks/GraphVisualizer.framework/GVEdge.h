/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:56 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GraphVisualizer.framework/GraphVisualizer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class GVNode, NSMutableArray;

@interface GVEdge : NSObject {

	BOOL reversed;
	GVNode* from;
	GVNode* to;
	NSMutableArray* dummies;

}

@property (nonatomic,retain) NSMutableArray * dummies; 
@property (assign,nonatomic) BOOL reversed; 
@property (nonatomic,readonly) GVNode * from; 
@property (nonatomic,readonly) GVNode * to; 
-(id)description;
-(id)init;
-(void)dealloc;
-(id)initWithFromNode:(id)arg1 to:(id)arg2 ;
-(GVNode *)from;
-(GVNode *)to;
-(NSMutableArray *)dummies;
-(void)setDummies:(NSMutableArray *)arg1 ;
-(BOOL)reversed;
-(void)setReversed:(BOOL)arg1 ;
@end

