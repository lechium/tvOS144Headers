/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface SNModelFeatureConnection : NSObject {

	NSString* _sourceFeatureName;
	NSString* _destinationFeatureName;

}

@property (readonly) NSString * sourceFeatureName;                   //@synthesize sourceFeatureName=_sourceFeatureName - In the implementation block
@property (readonly) NSString * destinationFeatureName;              //@synthesize destinationFeatureName=_destinationFeatureName - In the implementation block
-(NSString *)destinationFeatureName;
-(NSString *)sourceFeatureName;
-(id)initWithSourceFeatureName:(id)arg1 destinationFeatureName:(id)arg2 ;
@end

