/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:11 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Extensions/IOHIDFamily.kext/PlugIns/IOHIDLib.plugin/IOHIDLib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IOHIDLib/IOHIDLib-Structs.h>
#import <IOHIDLib/IOHIDTransactionClass.h>

@interface IOHIDOutputTransactionClass : IOHIDTransactionClass {

	IOHIDOutputTransactionInterface* _outputInterface;

}
-(void)dealloc;
-(id)initWithDevice:(id)arg1 ;
-(int)queryInterface:(SCD_Struct_IO0)arg1 outInterface:(void*)arg2 ;
-(int)setElementValue:(unsigned)arg1 value:(IOHIDEventStruct*)arg2 options:(unsigned)arg3 ;
-(int)getElementValue:(unsigned)arg1 value:(IOHIDEventStruct*)arg2 options:(unsigned)arg3 ;
@end

