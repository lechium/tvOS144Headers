/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:36 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSData, NSDictionary;

@interface MLAppleWordEmbeddingParameters : NSObject {

	unsigned long long _revision;
	NSString* _language;
	NSString* _inputFeatureName;
	NSString* _outputFeatureName;
	NSData* _modelParameterData;
	NSDictionary* _metadata;

}

@property (assign) unsigned long long revision;               //@synthesize revision=_revision - In the implementation block
@property (retain) NSString * language;                       //@synthesize language=_language - In the implementation block
@property (retain) NSString * inputFeatureName;               //@synthesize inputFeatureName=_inputFeatureName - In the implementation block
@property (retain) NSString * outputFeatureName;              //@synthesize outputFeatureName=_outputFeatureName - In the implementation block
@property (retain) NSData * modelParameterData;               //@synthesize modelParameterData=_modelParameterData - In the implementation block
@property (retain) NSDictionary * metadata;                   //@synthesize metadata=_metadata - In the implementation block
-(NSDictionary *)metadata;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setRevision:(unsigned long long)arg1 ;
-(unsigned long long)revision;
-(NSString *)inputFeatureName;
-(void)setInputFeatureName:(NSString *)arg1 ;
-(NSString *)outputFeatureName;
-(void)setOutputFeatureName:(NSString *)arg1 ;
-(NSData *)modelParameterData;
-(void)setModelParameterData:(NSData *)arg1 ;
-(id)initWithData:(unsigned long long)arg1 language:(id)arg2 inputFeatureName:(id)arg3 outputFeatureName:(id)arg4 modelData:(id)arg5 metadata:(id)arg6 error:(id*)arg7 ;
-(id)initWithData:(unsigned long long)arg1 language:(id)arg2 inputFeatureName:(id)arg3 outputFeatureName:(id)arg4 modelData:(id)arg5 error:(id*)arg6 ;
@end

