/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <Vision/VNRequestConfiguration.h>

@class NSString, NSDictionary, NSArray;

@interface VNImageAnalyzerCompoundRequestConfiguration : VNRequestConfiguration {

	NSString* _detectorType;
	NSDictionary* _detectorConfigurationOptions;
	NSArray* _originalRequestConfigurations;

}

@property (nonatomic,copy) NSString * detectorType;                                  //@synthesize detectorType=_detectorType - In the implementation block
@property (nonatomic,copy) NSDictionary * detectorConfigurationOptions;              //@synthesize detectorConfigurationOptions=_detectorConfigurationOptions - In the implementation block
@property (nonatomic,copy) NSArray * originalRequestConfigurations;                  //@synthesize originalRequestConfigurations=_originalRequestConfigurations - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)detectorConfigurationOptions;
-(NSString *)detectorType;
-(void)setDetectorType:(NSString *)arg1 ;
-(void)setDetectorConfigurationOptions:(NSDictionary *)arg1 ;
-(NSArray *)originalRequestConfigurations;
-(void)setOriginalRequestConfigurations:(NSArray *)arg1 ;
@end

