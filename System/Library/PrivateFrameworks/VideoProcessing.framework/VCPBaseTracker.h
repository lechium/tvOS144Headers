/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:01 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol VCPBaseTracker
@property (assign) CGPoint* box; 
@property (assign) BOOL stableInd; 
@property (assign) BOOL lostTrackInd; 
@required
-(id)init;
-(CGPoint*)box;
-(void)setBox:(CGPoint*)arg1;
-(void)setupTrackerWithReferenceFrame:(CVBufferRef)arg1 withROI:(CGPoint*)arg2;
-(void)trackInFrame:(CVBufferRef)arg1;
-(BOOL)lostTrackInd;
-(BOOL)stableInd;
-(void)setStableInd:(BOOL)arg1;
-(void)setLostTrackInd:(BOOL)arg1;

@end

