/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface VCSegmentCallHistory : NSObject {

	int _longTermAdjustmentTBR;
	int _shortTermAdjustmentTBR;
	int _previousISBR;
	int _longTermISBR;
	int _shortTermISBR;
	int _longTermSATXBR;
	int _shortTermSATXBR;
	int _longTermSARBR;
	int _shortTermSARBR;
	int _longTermBWE;
	int _shortTermBWE;
	int _historyLength;

}

@property (readonly) int shortTermAdjustmentTBR;              //@synthesize shortTermAdjustmentTBR=_shortTermAdjustmentTBR - In the implementation block
@property (readonly) int longTermAdjustmentTBR;               //@synthesize longTermAdjustmentTBR=_longTermAdjustmentTBR - In the implementation block
@property (readonly) int previousISBR;                        //@synthesize previousISBR=_previousISBR - In the implementation block
@property (readonly) int longTermISBR;                        //@synthesize longTermISBR=_longTermISBR - In the implementation block
@property (readonly) int shortTermISBR;                       //@synthesize shortTermISBR=_shortTermISBR - In the implementation block
@property (readonly) int longTermSATXBR;                      //@synthesize longTermSATXBR=_longTermSATXBR - In the implementation block
@property (readonly) int shortTermSATXBR;                     //@synthesize shortTermSATXBR=_shortTermSATXBR - In the implementation block
@property (readonly) int longTermSARBR;                       //@synthesize longTermSARBR=_longTermSARBR - In the implementation block
@property (readonly) int shortTermSARBR;                      //@synthesize shortTermSARBR=_shortTermSARBR - In the implementation block
@property (readonly) int longTermBWE;                         //@synthesize longTermBWE=_longTermBWE - In the implementation block
@property (readonly) int shortTermBWE;                        //@synthesize shortTermBWE=_shortTermBWE - In the implementation block
@property (readonly) int historyLength;                       //@synthesize historyLength=_historyLength - In the implementation block
+(int)fieldSize;
-(id)init;
-(int)serialize:(int*)arg1 ;
-(int)deserialize:(int*)arg1 ;
-(void)updateSegmentWithTBR:(int)arg1 ISBTR:(int)arg2 SATXBR:(int)arg3 SARBR:(int)arg4 BWE:(int)arg5 shortTermWeight:(double)arg6 longTermWeight:(double)arg7 ;
-(int)shortTermAdjustmentTBR;
-(int)longTermAdjustmentTBR;
-(int)previousISBR;
-(int)longTermISBR;
-(int)shortTermISBR;
-(int)longTermSATXBR;
-(int)shortTermSATXBR;
-(int)longTermSARBR;
-(int)shortTermSARBR;
-(int)longTermBWE;
-(int)shortTermBWE;
-(int)historyLength;
@end

