/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:44 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AssetCacheServices.framework/AssetCacheServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssetCacheServices/ACSURLSessionTask.h>

@interface ACSURLSessionDataTask : ACSURLSessionTask {

	/*^block*/id __clientDataCompletionHandler;

}

@property (copy) id _clientDataCompletionHandler;              //@synthesize _clientDataCompletionHandler=__clientDataCompletionHandler - In the implementation block
-(id)initWithNSURLDataTaskCreator:(/*^block*/id)arg1 initialRequest:(id)arg2 forSession:(id)arg3 ;
-(BOOL)_isUpload;
-(id)_clientDataCompletionHandler;
-(void)set_clientDataCompletionHandler:(id)arg1 ;
@end

