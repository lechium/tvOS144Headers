/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:16 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSURL;

@interface SSRSpeakerRecognitionScorer : NSObject {

	void* _novDetect;
	unsigned long long _offsetsType;
	BOOL _satModelAvailable;
	NSString* _profileID;
	NSURL* _configFilePath;
	NSURL* _resourceFilePath;
	NSURL* _modelFilePath;

}

@property (nonatomic,retain) NSURL * configFilePath;                      //@synthesize configFilePath=_configFilePath - In the implementation block
@property (nonatomic,retain) NSURL * resourceFilePath;                    //@synthesize resourceFilePath=_resourceFilePath - In the implementation block
@property (nonatomic,retain) NSURL * modelFilePath;                       //@synthesize modelFilePath=_modelFilePath - In the implementation block
@property (nonatomic,readonly) NSString * profileID;                      //@synthesize profileID=_profileID - In the implementation block
@property (nonatomic,readonly) NSString * sysConfigRoot; 
@property (nonatomic,readonly) NSString * psrConfigFilePath; 
@property (nonatomic,readonly) NSString * psrConfigRoot; 
@property (nonatomic,readonly) BOOL satModelAvailable;                    //@synthesize satModelAvailable=_satModelAvailable - In the implementation block
+(id)createVoiceScorersWithVoiceProfiles:(id)arg1 withConfigFile:(id)arg2 withResourceFile:(id)arg3 withOffsetsType:(unsigned long long)arg4 ;
-(void)dealloc;
-(NSString *)profileID;
-(NSURL *)modelFilePath;
-(void)setModelFilePath:(NSURL *)arg1 ;
-(void)resetForNewRequest;
-(id)_getValueForNDAPIConfigOption:(id)arg1 ;
-(double)_getFloatValueForNDAPIConfigOption:(id)arg1 defaultValue:(double)arg2 ;
-(unsigned long long)getSATVectorCount;
-(void)updateSAT;
-(void)deleteVectorAtIndex:(int)arg1 ;
-(double)_getFloatValueFromConfigurationName:(id)arg1 defaultTo:(double)arg2 ;
-(int)_getIntValueFromConfigurationName:(id)arg1 defaultTo:(int)arg2 ;
-(id)_getStringValueFromConfigurationName:(id)arg1 defaultTo:(id)arg2 ;
-(id)_getOptionValueFromConfigurationName:(id)arg1 ;
-(NSURL *)configFilePath;
-(NSURL *)resourceFilePath;
-(NSString *)psrConfigFilePath;
-(NSString *)psrConfigRoot;
-(float)scoreSpeakerVector:(id)arg1 withDimensions:(unsigned long long)arg2 withThresholdType:(unsigned long long)arg3 ;
-(BOOL)resetScorerWithModelFilePath:(id)arg1 ;
-(void)setConfigFilePath:(NSURL *)arg1 ;
-(void)setResourceFilePath:(NSURL *)arg1 ;
-(id)initWithProfileID:(id)arg1 withModelFile:(id)arg2 withConfigFile:(id)arg3 withResourceFile:(id)arg4 withOffsetsType:(unsigned long long)arg5 ;
-(BOOL)satModelAvailable;
-(float)analyzeSuperVector:(id)arg1 withDimensions:(unsigned long long)arg2 withThresholdType:(unsigned long long)arg3 ;
-(float)normalizedScoreFromRawScore:(float)arg1 forScoreType:(unsigned long long)arg2 ;
-(float)_satScoreVTScale;
-(float)_satScoreVTOffset;
-(float)_satLogitCeilScore;
-(float)_satLogitFloorScore;
-(float)_satScoreNonVTScale;
-(float)_satScoreNonVTOffset;
-(float)analyzeSpeakerVector:(id)arg1 withDimensions:(unsigned long long)arg2 withThresholdType:(unsigned long long)arg3 ;
-(NSString *)sysConfigRoot;
-(id)getSpeakerVectorAtIndex:(unsigned long long)arg1 ;
@end

