/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:47 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ProVideo/ProVideo-Structs.h>
@interface OZRigDropMenuTarget : NSObject {

	OZRig* _pRig;

}
+(id)rigDropMenuTargetForRig:(OZRig*)arg1 ;
-(void)setRig:(OZRig*)arg1 ;
-(void)pasteHelper:(unsigned)arg1 ;
-(void)pasteToNewSwitch;
-(void)pasteToNewList;
-(void)pasteToNewSlider;
@end
