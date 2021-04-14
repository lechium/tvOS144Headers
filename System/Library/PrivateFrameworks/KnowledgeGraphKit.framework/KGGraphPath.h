/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface KGGraphPath : NSObject {

	unsigned long long _sourceNodeIdentifier;
	unsigned long long _targetNodeIdentifier;
	unsigned long long _numberOfPaths;

}

@property (nonatomic,readonly) unsigned long long sourceNodeIdentifier;              //@synthesize sourceNodeIdentifier=_sourceNodeIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long targetNodeIdentifier;              //@synthesize targetNodeIdentifier=_targetNodeIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfPaths;                     //@synthesize numberOfPaths=_numberOfPaths - In the implementation block
-(id)description;
-(id)initWithSourceNodeIdentifier:(unsigned long long)arg1 targetNodeIdentifier:(unsigned long long)arg2 numberOfPaths:(unsigned long long)arg3 ;
-(unsigned long long)sourceNodeIdentifier;
-(unsigned long long)targetNodeIdentifier;
-(unsigned long long)numberOfPaths;
@end

