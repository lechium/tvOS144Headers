/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:33 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AudioToolboxCore/AudioToolboxCore-Structs.h>
@interface AUExtensionInstanceProxy : NSObject {

	AUv3InstanceBase* _auInstance;

}

@property (assign,nonatomic) AUv3InstanceBase* auInstance;              //@synthesize auInstance=_auInstance - In the implementation block
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setAuInstance:(AUv3InstanceBase*)arg1 ;
-(AUv3InstanceBase*)auInstance;
@end

