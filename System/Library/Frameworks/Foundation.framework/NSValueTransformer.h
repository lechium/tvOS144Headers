/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:01 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface NSValueTransformer : NSObject
+(void)setValueTransformer:(id)arg1 forName:(id)arg2 ;
+(BOOL)allowsReverseTransformation;
+(id)valueTransformerForName:(id)arg1 ;
+(id)valueTransformerNames;
+(Class)transformedValueClass;
-(id)init;
-(id)transformedValue:(id)arg1 ;
-(id)_initForFoundationOnly;
-(id)reverseTransformedValue:(id)arg1 ;
@end

