/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MWFeedParserDelegate <NSObject>
@optional
-(void)feedParserDidStart:(id)arg1;
-(void)feedParser:(id)arg1 didParseFeedInfo:(id)arg2;
-(void)feedParser:(id)arg1 didParseFeedItem:(id)arg2;
-(void)feedParserDidFinish:(id)arg1;
-(void)feedParser:(id)arg1 didFailWithError:(id)arg2;

@end

