/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:48 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ProactiveSupport/ProactiveSupport-Structs.h>
@interface _PASLPWriterV1 : NSObject
+(id)dataWithPropertyList:(id)arg1 error:(id*)arg2 ;
+(id)fileBackedDataWithPropertyList:(id)arg1 writtenToPath:(id)arg2 error:(id*)arg3 ;
+(id)fileBackedDataWithPropertyList:(id)arg1 appendedToFd:(int)arg2 startOfs:(long long*)arg3 error:(id*)arg4 ;
+(BOOL)_visitObject:(id)arg1 handleBoolean:(/*^block*/id)arg2 handleInt64:(/*^block*/id)arg3 handleFloat64:(/*^block*/id)arg4 handleTimeInterval:(/*^block*/id)arg5 handleData:(/*^block*/id)arg6 handleString:(/*^block*/id)arg7 handleDict:(/*^block*/id)arg8 handleArray:(/*^block*/id)arg9 handleOther:(/*^block*/id)arg10 ;
+(BOOL)_scanPlist:(id)arg1 recursionDepth:(unsigned long long)arg2 sizeUpperBound:(unsigned long long*)arg3 allDictionaryKeys:(id)arg4 error:(id*)arg5 ;
+(unsigned)_valueWordForObjectGraph:(id)arg1 allocContext:(SCD_Struct_PA17*)arg2 recursionDepth:(unsigned long long)arg3 ;
+(void)_writePlist:(id)arg1 allDictionaryKeys:(id)arg2 toBuffer:(void*)arg3 size:(unsigned long long)arg4 actSize:(unsigned long long*)arg5 ;
+(id)_mappedDataWithPlist:(id)arg1 fd:(int)arg2 ofs:(long long)arg3 error:(id*)arg4 ;
-(id)init;
@end

