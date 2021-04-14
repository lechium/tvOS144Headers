/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:14 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/BKSDisplayRenderOverlayDescribing.h>

@class NSString, CADisplay, BKSDisplayProgressIndicatorProperties;

@interface BKSDisplayRenderOverlayDescriptor : NSObject <NSSecureCoding, BSDescriptionProviding, BKSDisplayRenderOverlayDescribing> {

	NSString* _name;
	NSString* _displayUUID;
	CADisplay* _display;
	BKSDisplayProgressIndicatorProperties* _progressIndicatorProperties;
	long long _interfaceOrientation;
	BOOL _lockBacklight;
	BOOL _interstitial;

}

@property (nonatomic,copy) NSString * displayUUID;                                                             //@synthesize displayUUID=_displayUUID - In the implementation block
@property (assign,setter=_setInterstitial:,getter=isInterstitial,nonatomic) BOOL interstitial;                 //@synthesize interstitial=_interstitial - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                                           //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) CADisplay * display;                                                            //@synthesize display=_display - In the implementation block
@property (assign,nonatomic) long long interfaceOrientation;                                                   //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (assign,nonatomic) BOOL lockBacklight;                                                               //@synthesize lockBacklight=_lockBacklight - In the implementation block
@property (nonatomic,retain) BKSDisplayProgressIndicatorProperties * progressIndicatorProperties;              //@synthesize progressIndicatorProperties=_progressIndicatorProperties - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)descriptorWithName:(id)arg1 display:(id)arg2 ;
+(id)_classesRequiredToDecode;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(NSString *)displayUUID;
-(CADisplay *)display;
-(long long)interfaceOrientation;
-(BOOL)lockBacklight;
-(BKSDisplayProgressIndicatorProperties *)progressIndicatorProperties;
-(BOOL)isInterstitial;
-(id)_initWithName:(id)arg1 displayUUID:(id)arg2 ;
-(id)initWithName:(id)arg1 display:(id)arg2 ;
-(void)setDisplayUUID:(NSString *)arg1 ;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(void)setLockBacklight:(BOOL)arg1 ;
-(void)setProgressIndicatorProperties:(BKSDisplayProgressIndicatorProperties *)arg1 ;
-(void)_setInterstitial:(BOOL)arg1 ;
@end

