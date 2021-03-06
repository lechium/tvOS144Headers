/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:33 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSURL;

@interface GCNotificationOptions : NSObject {

	NSString* _title;
	NSString* _body;
	NSString* _categoryID;
	NSString* _threadID;
	NSURL* _defaultActionURL;

}

@property (nonatomic,retain) NSString * title;                      //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * body;                       //@synthesize body=_body - In the implementation block
@property (nonatomic,retain) NSString * categoryID;                 //@synthesize categoryID=_categoryID - In the implementation block
@property (nonatomic,retain) NSString * threadID;                   //@synthesize threadID=_threadID - In the implementation block
@property (nonatomic,retain) NSURL * defaultActionURL;              //@synthesize defaultActionURL=_defaultActionURL - In the implementation block
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setBody:(NSString *)arg1 ;
-(NSString *)body;
-(NSURL *)defaultActionURL;
-(void)setDefaultActionURL:(NSURL *)arg1 ;
-(NSString *)categoryID;
-(void)setCategoryID:(NSString *)arg1 ;
-(NSString *)threadID;
-(void)setThreadID:(NSString *)arg1 ;
@end

