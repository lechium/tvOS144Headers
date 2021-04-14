/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:12 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray;

@interface AXSSInterDeviceSwitchEvent : NSObject {

	BOOL _isDown;
	NSString* _switchIdentifier;
	NSString* _switchDisplayName;
	NSString* _deviceIdentifier;
	NSArray* _actions;
	NSArray* _longPressActions;

}

@property (nonatomic,copy) NSString * switchIdentifier;               //@synthesize switchIdentifier=_switchIdentifier - In the implementation block
@property (nonatomic,copy) NSString * switchDisplayName;              //@synthesize switchDisplayName=_switchDisplayName - In the implementation block
@property (nonatomic,copy) NSString * deviceIdentifier;               //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * actions;                       //@synthesize actions=_actions - In the implementation block
@property (nonatomic,retain) NSArray * longPressActions;              //@synthesize longPressActions=_longPressActions - In the implementation block
@property (assign,nonatomic) BOOL isDown;                             //@synthesize isDown=_isDown - In the implementation block
-(id)description;
-(id)dictionaryRepresentation;
-(NSArray *)actions;
-(void)setActions:(NSArray *)arg1 ;
-(NSString *)deviceIdentifier;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)initWithSwitchIdentifier:(id)arg1 switchDisplayName:(id)arg2 deviceIdentifier:(id)arg3 actions:(id)arg4 longPressActions:(id)arg5 isDown:(BOOL)arg6 ;
-(NSString *)switchDisplayName;
-(void)setSwitchDisplayName:(NSString *)arg1 ;
-(NSString *)switchIdentifier;
-(void)setSwitchIdentifier:(NSString *)arg1 ;
-(NSArray *)longPressActions;
-(BOOL)isDown;
-(id)initWithSwitchIdentifier:(id)arg1 switchDisplayName:(id)arg2 deviceIdentifier:(id)arg3 actions:(id)arg4 isDown:(BOOL)arg5 ;
-(void)setLongPressActions:(NSArray *)arg1 ;
-(void)setIsDown:(BOOL)arg1 ;
@end

