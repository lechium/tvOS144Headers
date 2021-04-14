/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeAI/HMITaskService.h>

@class VCPHomeKitAnalysisService;

@interface HMITaskServiceClient : HMITaskService {

	VCPHomeKitAnalysisService* _remote;

}

@property (readonly) VCPHomeKitAnalysisService * remote;              //@synthesize remote=_remote - In the implementation block
+(id)logCategory;
-(id)init;
-(VCPHomeKitAnalysisService *)remote;
-(BOOL)cancelTask:(int)arg1 ;
-(int)submitTaskWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
