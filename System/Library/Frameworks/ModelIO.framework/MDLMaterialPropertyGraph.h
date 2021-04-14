/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:12 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ModelIO/MDLMaterialPropertyNode.h>

@class NSArray, NSMutableArray;

@interface MDLMaterialPropertyGraph : MDLMaterialPropertyNode {

	NSArray* _nodes;
	NSArray* _connections;
	NSMutableArray* _finalNodes;

}

@property (nonatomic,readonly) NSArray * nodes;                    //@synthesize nodes=_nodes - In the implementation block
@property (nonatomic,readonly) NSArray * connections;              //@synthesize connections=_connections - In the implementation block
-(NSArray *)connections;
-(NSArray *)nodes;
-(id)initWithNodes:(id)arg1 connections:(id)arg2 ;
-(void)evaluate;
@end

