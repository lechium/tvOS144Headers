/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:48 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BWIrisStagingNodeIrisRequestDelegate <NSObject>
@required
-(void)stagingNode:(id)arg1 readyToReceiveRequestsWithEarliestAllowedStillImageCaptureHostPTS:(SCD_Struct_BW7)arg2;
-(void)stagingNode:(id)arg1 willEmitIrisRequest:(id)arg2;
-(void)stagingNode:(id)arg1 waitingToEmitFrameWithPTS:(SCD_Struct_BW7)arg2;

@end
