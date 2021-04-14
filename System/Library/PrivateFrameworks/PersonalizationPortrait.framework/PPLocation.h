/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:19 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/MLFeatureProvider.h>

@class CLPlacemark, PPLocationRecord, NSString, NSSet;

@interface PPLocation : NSObject <NSCopying, NSSecureCoding, MLFeatureProvider> {

	unsigned short _category;
	CLPlacemark* _placemark;
	PPLocationRecord* _mostRelevantRecord;
	NSString* _clusterIdentifier;

}

@property (nonatomic,readonly) NSString * clusterIdentifier;                       //@synthesize clusterIdentifier=_clusterIdentifier - In the implementation block
@property (nonatomic,readonly) CLPlacemark * placemark;                            //@synthesize placemark=_placemark - In the implementation block
@property (nonatomic,readonly) unsigned short category;                            //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) PPLocationRecord * mostRelevantRecord;              //@synthesize mostRelevantRecord=_mostRelevantRecord - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
+(BOOL)supportsSecureCoding;
+(id)describeCategory:(unsigned short)arg1 ;
+(id)clusterIdentifierFromPlacemark:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned short)category;
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(CLPlacemark *)placemark;
-(BOOL)isEqualToLocation:(id)arg1 ;
-(PPLocationRecord *)mostRelevantRecord;
-(NSString *)clusterIdentifier;
-(id)customizedDescription;
-(id)initWithPlacemark:(id)arg1 category:(unsigned short)arg2 mostRelevantRecord:(id)arg3 ;
@end
