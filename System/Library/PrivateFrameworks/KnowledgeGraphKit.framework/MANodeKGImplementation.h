/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:36 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MANodeImplementationProtocol.h>

@class MANode, NSString;

@interface MANodeKGImplementation : NSObject <MANodeImplementationProtocol> {

	MANode* _node;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithNode:(id)arg1 ;
-(unsigned long long)memoryFootprint:(id)arg1 ;
-(void)removeEdge:(id)arg1 ;
-(unsigned long long)countOfEdgesOfType:(unsigned long long)arg1 withLabel:(id)arg2 inDomain:(unsigned short)arg3 ;
-(BOOL)hasEdgeOfType:(unsigned long long)arg1 withLabel:(id)arg2 inDomain:(unsigned short)arg3 ;
-(id)anyEdgeOfType:(unsigned long long)arg1 withLabel:(id)arg2 inDomain:(unsigned short)arg3 ;
-(id)edgesOfType:(unsigned long long)arg1 withLabel:(id)arg2 inDomain:(unsigned short)arg3 ;
-(void)enumerateEdgesOfType:(unsigned long long)arg1 withLabel:(id)arg2 inDomain:(unsigned short)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)enumerateEdgesInDomains:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)hasEdgeOfType:(unsigned long long)arg1 withNode:(id)arg2 ;
-(id)anyEdgeOfType:(unsigned long long)arg1 withNode:(id)arg2 ;
-(id)edgesOfType:(unsigned long long)arg1 withNode:(id)arg2 ;
-(id)neighborNodesWithLabel:(id)arg1 inDomain:(unsigned short)arg2 ;
-(void)enumerateNeighborNodesWithLabel:(id)arg1 inDomain:(unsigned short)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)anyNeighborNodeThroughEdgesOfType:(unsigned long long)arg1 withLabel:(id)arg2 inDomain:(unsigned short)arg3 ;
-(id)neighborNodesThroughEdgesOfType:(unsigned long long)arg1 withLabel:(id)arg2 inDomain:(unsigned short)arg3 ;
-(void)enumerateNeighborNodesThroughEdgesOfType:(unsigned long long)arg1 withLabel:(id)arg2 inDomain:(unsigned short)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)enumerateNeighborNodesThroughEdgesInDomains:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)siblingNodesThroughEdgesWithLabel:(id)arg1 inDomain:(unsigned short)arg2 ;
-(void)enumerateSiblingNodesThroughEdgesWithLabel:(id)arg1 inDomain:(unsigned short)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)enumerateSiblingNodesThroughEdgesInDomains:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)addEdge:(id)arg1 ;
-(void)enumerateDeepNeighborsWithLabel:(id)arg1 domain:(unsigned short)arg2 edgeType:(unsigned long long)arg3 excluding:(id)arg4 shouldStop:(BOOL*)arg5 block:(/*^block*/id)arg6 ;
@end

