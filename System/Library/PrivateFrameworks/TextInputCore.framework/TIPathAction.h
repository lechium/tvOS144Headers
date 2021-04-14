/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInputCore/TIUserAction.h>

@interface TIPathAction : TIUserAction {

	unsigned long long _syllableCount;

}

@property (nonatomic,readonly) unsigned long long syllableCount;              //@synthesize syllableCount=_syllableCount - In the implementation block
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)syllableCount;
-(id)initWithSyllableCount:(unsigned long long)arg1 keyboardState:(id)arg2 ;
@end

