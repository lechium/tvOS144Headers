/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:36 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class WBSConfigurationDataTransformer, NSURLSessionDataTask, NSURL, NSString;

@interface WBSConfigurationDownloader : NSObject {

	WBSConfigurationDataTransformer* _transformer;
	NSURLSessionDataTask* _dataTask;
	NSURL* _baseURL;
	NSString* _fileName;
	BOOL _isCancelled;

}
+(id)new;
-(id)init;
-(void)cancel;
-(id)initWithFileName:(id)arg1 dataTransformer:(id)arg2 ;
-(void)downloadConfigurationWithCompletionHandler:(/*^block*/id)arg1 ;
@end

