/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:55 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFWorkflowUser.h>

@class NSString, NSURL;

@interface WFMutableWorkflowUser : WFWorkflowUser {

	NSString* email;
	NSString* fullName;
	NSString* twitter;
	NSURL* websiteURL;
	NSURL* profileImageURL;
	long long mainIdentity;

}

@property (nonatomic,copy) NSString * email; 
@property (nonatomic,copy) NSString * fullName; 
@property (nonatomic,copy) NSString * twitter; 
@property (nonatomic,retain) NSURL * websiteURL; 
@property (nonatomic,retain) NSURL * profileImageURL; 
@property (assign,nonatomic) long long mainIdentity; 
-(long long)mainIdentity;
-(NSString *)email;
-(void)setEmail:(NSString *)arg1 ;
-(void)setFullName:(NSString *)arg1 ;
-(NSString *)fullName;
-(NSURL *)websiteURL;
-(void)setWebsiteURL:(NSURL *)arg1 ;
-(NSString *)twitter;
-(NSURL *)profileImageURL;
-(void)setTwitter:(NSString *)arg1 ;
-(void)setProfileImageURL:(NSURL *)arg1 ;
-(void)setMainIdentity:(long long)arg1 ;
@end

