/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriVOX/SiriVOX-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, SVXDeviceSetupFlowSiriCapabilitiesHint;

@interface SVXDeviceSetupFlowScene : NSObject <NSCopying, NSSecureCoding> {

	long long _sceneID;
	NSString* _speakableText;
	NSArray* _displayKeyFrames;
	SVXDeviceSetupFlowSiriCapabilitiesHint* _siriCapabilitiesHint;

}

@property (nonatomic,readonly) long long sceneID;                                                               //@synthesize sceneID=_sceneID - In the implementation block
@property (nonatomic,copy,readonly) NSString * speakableText;                                                   //@synthesize speakableText=_speakableText - In the implementation block
@property (nonatomic,copy,readonly) NSArray * displayKeyFrames;                                                 //@synthesize displayKeyFrames=_displayKeyFrames - In the implementation block
@property (nonatomic,copy,readonly) SVXDeviceSetupFlowSiriCapabilitiesHint * siriCapabilitiesHint;              //@synthesize siriCapabilitiesHint=_siriCapabilitiesHint - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)sceneID;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(NSString *)speakableText;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(NSArray *)displayKeyFrames;
-(id)initWithSceneID:(long long)arg1 speakableText:(id)arg2 displayKeyFrames:(id)arg3 siriCapabilitiesHint:(id)arg4 ;
-(SVXDeviceSetupFlowSiriCapabilitiesHint *)siriCapabilitiesHint;
@end

