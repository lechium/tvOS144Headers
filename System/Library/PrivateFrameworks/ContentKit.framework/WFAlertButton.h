/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:05 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, WFAlert;

@interface WFAlertButton : NSObject {

	BOOL _preferred;
	NSString* _title;
	long long _style;
	/*^block*/id _handler;
	WFAlert* _alert;

}

@property (nonatomic,copy,readonly) id handler;                                //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic,__weak) WFAlert * alert;                           //@synthesize alert=_alert - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) long long style;                                //@synthesize style=_style - In the implementation block
@property (getter=isPreferred,nonatomic,readonly) BOOL preferred;              //@synthesize preferred=_preferred - In the implementation block
+(id)buttonWithTitle:(id)arg1 style:(long long)arg2 preferred:(BOOL)arg3 handler:(/*^block*/id)arg4 ;
+(id)cancelButtonWithTarget:(id)arg1 action:(SEL)arg2 ;
+(id)buttonWithTitle:(id)arg1 style:(long long)arg2 handler:(/*^block*/id)arg3 ;
+(id)cancelButtonWithHandler:(/*^block*/id)arg1 ;
+(id)okButtonWithHandler:(/*^block*/id)arg1 ;
+(id)okButtonWithTarget:(id)arg1 action:(SEL)arg2 ;
-(NSString *)title;
-(long long)style;
-(id)handler;
-(WFAlert *)alert;
-(BOOL)isPreferred;
-(void)setAlert:(WFAlert *)arg1 ;
-(id)initWithTitle:(id)arg1 style:(long long)arg2 handler:(/*^block*/id)arg3 preferred:(BOOL)arg4 ;
@end

