/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <KnowledgeGraphKit/KnowledgeGraphKit-Structs.h>
#import <libobjc.A.dylib/KGEdge.h>

@protocol KGNode;
@class NSArray, NSDictionary, NSString;

@interface KGSnapshotEdge : NSObject <KGEdge> {

	float _weight;
	unsigned long long _identifier;
	NSArray* _labels;
	NSDictionary* _properties;
	id<KGNode> _sourceNode;
	id<KGNode> _targetNode;

}

@property (nonatomic,readonly) id<KGNode> targetNode;                       //@synthesize targetNode=_targetNode - In the implementation block
@property (nonatomic,readonly) id<KGNode> sourceNode;                       //@synthesize sourceNode=_sourceNode - In the implementation block
@property (nonatomic,readonly) unsigned long long identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) float weight;                                //@synthesize weight=_weight - In the implementation block
@property (nonatomic,copy,readonly) NSArray * labels;                       //@synthesize labels=_labels - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * properties;              //@synthesize properties=_properties - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)identifier;
-(NSDictionary *)properties;
-(float)weight;
-(NSArray *)labels;
-(id<KGNode>)targetNode;
-(id<KGNode>)sourceNode;
-(id)initWithIdentifier:(unsigned long long)arg1 labels:(id)arg2 weight:(float)arg3 properties:(id)arg4 sourceNode:(id)arg5 targetNode:(id)arg6 ;
-(id)oppositeNodeFromNode:(id)arg1 ;
@end

