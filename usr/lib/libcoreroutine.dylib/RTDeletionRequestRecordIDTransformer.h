/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSValueTransformer.h>

@interface RTDeletionRequestRecordIDTransformer : NSValueTransformer
+(BOOL)allowsReverseTransformation;
+(Class)transformedValueClass;
-(id)transformedValue:(id)arg1 ;
-(id)reverseTransformedValue:(id)arg1 ;
-(id)compressData:(id)arg1 algorithm:(int)arg2 ;
-(id)decompressData:(id)arg1 algorithm:(int)arg2 ;
-(BOOL)dataCompressedWithOriginalSize:(unsigned long long)arg1 compressedSize:(unsigned long long)arg2 ;
-(id)deprecatedDecompressData:(id)arg1 algorithm:(int)arg2 ;
@end
