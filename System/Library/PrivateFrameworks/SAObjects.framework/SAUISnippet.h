/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:19 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SAAceView.h>

@class SAUIConfirmationOptions, SAUISash, NSString;

@interface SAUISnippet : SAAceView

@property (assign,nonatomic) long long category; 
@property (nonatomic,retain) SAUIConfirmationOptions * confirmationOptions; 
@property (nonatomic,retain) SAUISash * sash; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,copy) NSString * summaryTitle; 
@property (nonatomic,copy) NSString * title; 
+(id)snippet;
+(id)snippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(long long)category;
-(void)setCategory:(long long)arg1 ;
-(id)groupIdentifier;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(id)encodedClassName;
-(SAUIConfirmationOptions *)confirmationOptions;
-(void)setConfirmationOptions:(SAUIConfirmationOptions *)arg1 ;
-(SAUISash *)sash;
-(void)setSash:(SAUISash *)arg1 ;
-(NSString *)summaryTitle;
-(void)setSummaryTitle:(NSString *)arg1 ;
@end

