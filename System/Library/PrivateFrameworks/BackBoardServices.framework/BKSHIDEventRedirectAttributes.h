/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <BackBoardServices/BKSHIDEventBaseAttributes.h>

@interface BKSHIDEventRedirectAttributes : BKSHIDEventBaseAttributes {

	int _pid;

}

@property (assign,nonatomic) int pid;              //@synthesize pid=_pid - In the implementation block
+(id)protobufSchema;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)pid;
-(void)setPid:(int)arg1 ;
-(void)appendDescriptionToFormatter:(id)arg1 ;
@end

