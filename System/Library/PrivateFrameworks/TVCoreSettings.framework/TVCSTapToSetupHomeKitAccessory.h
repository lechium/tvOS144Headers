/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:21 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVCoreSettings.framework/TVCoreSettings
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVCoreSettings/TVCSTapToSetupHomeKitObject.h>

@class NSString;

@interface TVCSTapToSetupHomeKitAccessory : TVCSTapToSetupHomeKitObject {

	BOOL _supportsAudioDestination;
	NSString* _categoryType;
	NSString* _audioDestinationIdentifier;

}

@property (nonatomic,copy) NSString * audioDestinationIdentifier;              //@synthesize audioDestinationIdentifier=_audioDestinationIdentifier - In the implementation block
@property (assign,nonatomic) BOOL supportsAudioDestination;                    //@synthesize supportsAudioDestination=_supportsAudioDestination - In the implementation block
@property (nonatomic,copy) NSString * categoryType;                            //@synthesize categoryType=_categoryType - In the implementation block
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)categoryType;
-(void)setCategoryType:(NSString *)arg1 ;
-(id)initWithUniqueIdentifier:(id)arg1 name:(id)arg2 ;
-(BOOL)supportsAudioDestination;
-(NSString *)audioDestinationIdentifier;
-(void)setAudioDestinationIdentifier:(NSString *)arg1 ;
-(void)setSupportsAudioDestination:(BOOL)arg1 ;
@end

