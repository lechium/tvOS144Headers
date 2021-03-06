/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface PFCloudKitThrottledNotificationObserver : NSObject {

	Ai _notificationIteration;
	NSString* _assertionLabel;
	NSString* _label;
	long long _notificationStalenessInterval;
	/*^block*/id _notificationHandlerBlock;

}

@property (nonatomic,retain) NSString * label;                                     //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) long long notificationStalenessInterval;              //@synthesize notificationStalenessInterval=_notificationStalenessInterval - In the implementation block
@property (nonatomic,copy) id notificationHandlerBlock;                            //@synthesize notificationHandlerBlock=_notificationHandlerBlock - In the implementation block
-(void)dealloc;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(id)initWithLabel:(id)arg1 ;
-(void)setNotificationStalenessInterval:(long long)arg1 ;
-(void)setNotificationHandlerBlock:(id)arg1 ;
-(void)noteRecievedNotification:(id)arg1 ;
-(long long)notificationStalenessInterval;
-(id)notificationHandlerBlock;
@end

