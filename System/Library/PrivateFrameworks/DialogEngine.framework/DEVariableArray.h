/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:14 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DialogEngine/DialogEngine-Structs.h>
#import <DialogEngine/DEVariable.h>

@interface DEVariableArray : DEVariable
-(id)init;
-(id)initWithName:(id)arg1 ;
-(id)getItem:(unsigned long long)arg1 ;
-(void)addItem:(id)arg1 ;
-(id)initWithSharedPtr:(shared_ptr<siri::dialogengine::Variable>*)arg1 ;
-(unsigned long long)getLength;
@end
