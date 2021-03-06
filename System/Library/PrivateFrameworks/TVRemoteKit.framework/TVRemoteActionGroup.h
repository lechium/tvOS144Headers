/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVRemoteKit.framework/TVRemoteKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVRemoteKit/TVRemoteItem.h>

@class NSArray, NSString;

@interface TVRemoteActionGroup : NSObject <TVRemoteItem> {

	NSArray* _remoteItems;
	NSString* _remoteItemTitle;
	long long _icon;

}

@property (nonatomic,copy) NSString * remoteItemTitle;              //@synthesize remoteItemTitle=_remoteItemTitle - In the implementation block
@property (assign,nonatomic) long long icon;                        //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) NSArray * remoteItems;                 //@synthesize remoteItems=_remoteItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)groupWithTitle:(id)arg1 icon:(long long)arg2 items:(id)arg3 ;
-(id)_init;
-(long long)icon;
-(void)setIcon:(long long)arg1 ;
-(void)setRemoteItemTitle:(NSString *)arg1 ;
-(NSString *)remoteItemTitle;
-(BOOL)isRemoteItemCollection;
-(NSArray *)remoteItems;
-(long long)remoteItemIcon;
-(void)setRemoteItems:(NSArray *)arg1 ;
@end

