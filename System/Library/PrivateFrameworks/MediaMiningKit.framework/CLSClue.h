/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:42 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDictionary, CLSInformant, CLSProfile;

@interface CLSClue : NSObject {

	BOOL _transient;
	NSString* _key;
	id _value;
	double _confidence;
	double _relevance;
	NSDictionary* _extraParameters;
	CLSInformant* _informant;
	CLSProfile* _profile;
	NSString* _informantIdentifier;
	NSString* _profileIdentifier;
	unsigned long long _versionCount;

}

@property (copy) NSString * key;                                 //@synthesize key=_key - In the implementation block
@property (retain) id value;                                     //@synthesize value=_value - In the implementation block
@property (assign) double confidence;                            //@synthesize confidence=_confidence - In the implementation block
@property (assign) double relevance;                             //@synthesize relevance=_relevance - In the implementation block
@property (retain) CLSInformant * informant;                     //@synthesize informant=_informant - In the implementation block
@property (retain) CLSProfile * profile;                         //@synthesize profile=_profile - In the implementation block
@property (retain) NSString * informantIdentifier;               //@synthesize informantIdentifier=_informantIdentifier - In the implementation block
@property (retain) NSString * profileIdentifier;                 //@synthesize profileIdentifier=_profileIdentifier - In the implementation block
@property (assign) BOOL transient;                               //@synthesize transient=_transient - In the implementation block
@property (assign) unsigned long long versionCount;              //@synthesize versionCount=_versionCount - In the implementation block
@property (retain) NSDictionary * extraParameters;               //@synthesize extraParameters=_extraParameters - In the implementation block
+(id)_clueWithValue:(id)arg1 forKey:(id)arg2 ;
+(id)_clueWithValue:(id)arg1 forKey:(id)arg2 confidence:(double)arg3 relevance:(double)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(double)doubleValue;
-(long long)compare:(id)arg1 ;
-(id)stringValue;
-(long long)integerValue;
-(id)value;
-(void)setValue:(id)arg1 ;
-(NSString *)key;
-(double)score;
-(double)confidence;
-(void)setKey:(NSString *)arg1 ;
-(void)setTransient:(BOOL)arg1 ;
-(CLSProfile *)profile;
-(void)setConfidence:(double)arg1 ;
-(unsigned long long)enumValue;
-(void)setProfile:(CLSProfile *)arg1 ;
-(unsigned long long)valueHash;
-(NSString *)profileIdentifier;
-(void)setProfileIdentifier:(NSString *)arg1 ;
-(NSDictionary *)extraParameters;
-(void)setExtraParameters:(NSDictionary *)arg1 ;
-(BOOL)transient;
-(void)setInformant:(CLSInformant *)arg1 ;
-(void)setRelevance:(double)arg1 ;
-(double)relevance;
-(void)_incrementVersionCount;
-(NSString *)informantIdentifier;
-(void)setInformantIdentifier:(NSString *)arg1 ;
-(long long)compareScore:(id)arg1 ;
-(BOOL)isEqualToClue:(id)arg1 ;
-(CLSInformant *)informant;
-(unsigned long long)versionCount;
-(void)setVersionCount:(unsigned long long)arg1 ;
@end

