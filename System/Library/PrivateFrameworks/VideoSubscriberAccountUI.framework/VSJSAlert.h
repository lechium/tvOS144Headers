/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:41 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/VSJSAlert.h>
@class NSString, NSArray;


@protocol VSJSAlert <JSExport>
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,copy) NSArray * actions; 
@required
-(id)init;
-(NSString *)title;
-(void)setTitle:(id)arg1;
-(NSString *)message;
-(NSArray *)actions;
-(void)setActions:(id)arg1;
-(void)setMessage:(id)arg1;

@end


@class NSString, NSArray;

@interface VSJSAlert : IKJSObject <VSJSAlert> {

	NSString* _title;
	NSString* _message;
	NSArray* _actions;

}

@property (nonatomic,copy) NSString * title;                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSArray * actions;               //@synthesize actions=_actions - In the implementation block
-(id)init;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)message;
-(NSArray *)actions;
-(void)setActions:(NSArray *)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
@end

