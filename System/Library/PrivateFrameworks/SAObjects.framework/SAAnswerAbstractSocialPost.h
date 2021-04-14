/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSArray, NSDate, NSURL;

@interface SAAnswerAbstractSocialPost : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * author; 
@property (nonatomic,copy) NSString * authorTitle; 
@property (nonatomic,copy) NSArray * comments; 
@property (nonatomic,copy) NSDate * dateCreated; 
@property (nonatomic,copy) NSDate * dateModified; 
@property (nonatomic,copy) NSURL * icon; 
@property (assign,nonatomic) long long rank; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSString * title; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)abstractSocialPost;
+(id)abstractSocialPostWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSURL *)icon;
-(void)setIcon:(NSURL *)arg1 ;
-(NSString *)author;
-(void)setAuthor:(NSString *)arg1 ;
-(void)setRank:(long long)arg1 ;
-(long long)rank;
-(NSArray *)comments;
-(void)setComments:(NSArray *)arg1 ;
-(NSDate *)dateCreated;
-(void)setDateCreated:(NSDate *)arg1 ;
-(NSDate *)dateModified;
-(void)setDateModified:(NSDate *)arg1 ;
-(id)encodedClassName;
-(NSString *)authorTitle;
-(void)setAuthorTitle:(NSString *)arg1 ;
@end

