/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:19:55 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BSXPCEncoding <NSObject>
@required
-(void)encodeInt64:(long long)arg1 forKey:(id)arg2;
-(void)encodeObject:(id)arg1 forKey:(id)arg2;
-(void)encodeBool:(BOOL)arg1 forKey:(id)arg2;
-(void)encodeDouble:(double)arg1 forKey:(id)arg2;
-(void)encodeXPCObject:(id)arg1 forKey:(id)arg2;
-(void)encodeCollection:(id)arg1 forKey:(id)arg2;
-(void)encodeCGPoint:(CGPoint)arg1 forKey:(id)arg2;
-(void)encodeCGSize:(CGSize)arg1 forKey:(id)arg2;
-(void)encodeCGRect:(CGRect)arg1 forKey:(id)arg2;
-(void)encodeUInt64:(unsigned long long)arg1 forKey:(id)arg2;

@end

