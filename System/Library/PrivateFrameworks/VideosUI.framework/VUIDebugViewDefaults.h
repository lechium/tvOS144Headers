/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface VUIDebugViewDefaults : NSObject {

	BOOL _defaultBoolValue;
	BOOL _integerValueType;
	NSString* _title;
	NSString* _subtitle;
	NSString* _domain;
	NSString* _defaultName;
	unsigned long long _defaultIntegerValue;

}

@property (nonatomic,readonly) NSString * title;                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * subtitle;                               //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) NSString * domain;                                 //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) NSString * defaultName;                            //@synthesize defaultName=_defaultName - In the implementation block
@property (assign,nonatomic) BOOL defaultBoolValue;                               //@synthesize defaultBoolValue=_defaultBoolValue - In the implementation block
@property (assign,nonatomic) BOOL integerValueType;                               //@synthesize integerValueType=_integerValueType - In the implementation block
@property (assign,nonatomic) unsigned long long defaultIntegerValue;              //@synthesize defaultIntegerValue=_defaultIntegerValue - In the implementation block
-(NSString *)domain;
-(NSString *)title;
-(NSString *)subtitle;
-(NSString *)defaultName;
-(BOOL)integerValueType;
-(unsigned long long)defaultIntegerValue;
-(BOOL)defaultBoolValue;
-(void)toggleDefaultBoolValue;
-(void)setDefaultIntegerValue:(unsigned long long)arg1 ;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 domain:(id)arg3 defaultName:(id)arg4 boolType:(BOOL)arg5 ;
-(void)setDefaultBoolValue:(BOOL)arg1 ;
-(void)setIntegerValueType:(BOOL)arg1 ;
@end
