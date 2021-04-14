/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol KGEdge <KGElement>
@property (nonatomic,readonly) id<KGNode> targetNode; 
@property (nonatomic,readonly) id<KGNode> sourceNode; 
@required
-(id<KGNode>)targetNode;
-(id<KGNode>)sourceNode;
-(id)initWithIdentifier:(unsigned long long)arg1 labels:(id)arg2 weight:(float)arg3 properties:(id)arg4 sourceNode:(id)arg5 targetNode:(id)arg6;
-(id)oppositeNodeFromNode:(id)arg1;

@end
