/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:46 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsUI/CNCardGroupItem.h>

@class CNMutableContact, NSString;

@interface ABPostalNameGroupItem : CNCardGroupItem {

	CNMutableContact* _contact;
	SEL _setter;
	NSString* _value;
	NSString* _property;
	NSString* _placeholder;

}

@property (nonatomic,retain) CNMutableContact * contact;              //@synthesize contact=_contact - In the implementation block
@property (assign,nonatomic) SEL setter;                              //@synthesize setter=_setter - In the implementation block
@property (nonatomic,copy) NSString * value;                          //@synthesize value=_value - In the implementation block
@property (nonatomic,copy) NSString * property;                       //@synthesize property=_property - In the implementation block
@property (nonatomic,copy) NSString * placeholder;                    //@synthesize placeholder=_placeholder - In the implementation block
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)placeholder;
-(NSString *)property;
-(void)setProperty:(NSString *)arg1 ;
-(CNMutableContact *)contact;
-(void)setPlaceholder:(NSString *)arg1 ;
-(SEL)setter;
-(void)setContact:(CNMutableContact *)arg1 ;
-(void)setSetter:(SEL)arg1 ;
@end

