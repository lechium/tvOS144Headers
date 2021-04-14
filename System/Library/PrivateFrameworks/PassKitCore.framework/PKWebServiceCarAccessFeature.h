/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:21 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKWebServiceRegionFeature.h>

@class PKOSVersionRequirementRange, NSArray;

@interface PKWebServiceCarAccessFeature : PKWebServiceRegionFeature {

	PKOSVersionRequirementRange* _ownerSharingOSVersionRequirement;
	PKOSVersionRequirementRange* _friendSharingOSVersionRequirement;
	NSArray* _supportedTerminals;

}

@property (nonatomic,readonly) PKOSVersionRequirementRange * ownerSharingOSVersionRequirement;               //@synthesize ownerSharingOSVersionRequirement=_ownerSharingOSVersionRequirement - In the implementation block
@property (nonatomic,readonly) PKOSVersionRequirementRange * friendSharingOSVersionRequirement;              //@synthesize friendSharingOSVersionRequirement=_friendSharingOSVersionRequirement - In the implementation block
@property (nonatomic,copy,readonly) NSArray * supportedTerminals;                                            //@synthesize supportedTerminals=_supportedTerminals - In the implementation block
-(id)initWithDictionary:(id)arg1 region:(id)arg2 ;
-(id)localizedNameForIssuerWithIdentifier:(id)arg1 ;
-(PKOSVersionRequirementRange *)ownerSharingOSVersionRequirement;
-(PKOSVersionRequirementRange *)friendSharingOSVersionRequirement;
-(NSArray *)supportedTerminals;
@end

