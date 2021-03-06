/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:20 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSString, PPTopicRecord, NSSet;

@interface PPTopic : NSObject <NSCopying, NSSecureCoding, MLFeatureProvider> {

	NSString* _topicIdentifier;
	NSString* _clusterIdentifier;

}

@property (nonatomic,readonly) NSString * clusterIdentifier;                    //@synthesize clusterIdentifier=_clusterIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * topicIdentifier;                      //@synthesize topicIdentifier=_topicIdentifier - In the implementation block
@property (nonatomic,readonly) PPTopicRecord * mostRelevantRecord; 
@property (nonatomic,readonly) double sentimentScore; 
@property (nonatomic,readonly) NSSet * featureNames; 
+(BOOL)supportsSecureCoding;
+(id)clusterIdentifierFromTopicId:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(double)sentimentScore;
-(id)id;
-(NSString *)topicIdentifier;
-(PPTopicRecord *)mostRelevantRecord;
-(NSString *)clusterIdentifier;
-(id)initWithTopicIdentifier:(id)arg1 mostRelevantRecord:(id)arg2 ;
-(id)initWithTopicIdentifier:(id)arg1 ;
-(BOOL)isEqualToTopic:(id)arg1 ;
-(id)initWithId:(id)arg1 ;
@end

