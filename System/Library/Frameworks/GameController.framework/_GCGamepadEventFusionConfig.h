/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:33 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _GCGamepadEventFusionConfig : NSObject <NSSecureCoding> {

	unsigned long long _sourceCount;
	int* _matrix[41];

}

@property (nonatomic,readonly) unsigned long long sourceCount;              //@synthesize sourceCount=_sourceCount - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)debugDescription;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSourceCount:(unsigned long long)arg1 ;
-(unsigned long long)sourceCount;
-(void)setPass:(BOOL)arg1 element:(long long)arg2 forSourceAtIndex:(unsigned long long)arg3 ;
-(BOOL)shouldPassElement:(long long)arg1 forSourceAtIndex:(unsigned long long)arg2 ;
-(void)enumeratePassedElementsForSourceAtIndex:(unsigned long long)arg1 withBlock:(/*^block*/id)arg2 ;
@end

